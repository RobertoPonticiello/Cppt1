#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cstdio>

static bool writeFile(const std::string &path, const std::string &content)
{
	std::ofstream out(path.c_str(), std::ios::out | std::ios::binary);
	if (!out)
		return false;
	out.write(content.c_str(), content.size());
	return out.good();
}

static bool readFile(const std::string &path, std::string &outContent)
{
	std::ifstream in(path.c_str(), std::ios::in | std::ios::binary);
	if (!in)
		return false;
	std::ostringstream oss;
	char c;
	while (in.get(c))
		oss << c;
	outContent = oss.str();
	return true;
}

static bool runCase(const std::string &input, const std::string &s1, const std::string &s2, const std::string &expected)
{
	const std::string inPath = "_test_input.txt";
	const std::string outPath = inPath + ".replace";
	std::remove(outPath.c_str());
	std::remove(inPath.c_str());

	if (!writeFile(inPath, input))
		return false;

	std::string cmd = "./replace \"" + inPath + "\" \"" + s1 + "\" \"" + s2 + "\"";
	int code = std::system(cmd.c_str());
	if (code != 0)
		return false;

	std::string got;
	if (!readFile(outPath, got))
		return false;

	std::remove(outPath.c_str());
	std::remove(inPath.c_str());
	return got == expected;
}

int main()
{
	int passed = 0;
	int total = 0;

	++total;
	bool ok1 = runCase("hello world\n", "world", "42", "hello 42\n");
	std::cout << (ok1 ? "[OK]   " : "[FAIL] ") << "basic replacement" << std::endl;
	if (ok1) ++passed;

	++total;
	bool ok2 = runCase("aaaa", "aa", "b", "bb");
	std::cout << (ok2 ? "[OK]   " : "[FAIL] ") << "multiple occurrences" << std::endl;
	if (ok2) ++passed;

	++total;
	bool ok3 = runCase("abc def", "xyz", "42", "abc def");
	std::cout << (ok3 ? "[OK]   " : "[FAIL] ") << "no match keeps content" << std::endl;
	if (ok3) ++passed;

	std::cout << "\n" << passed << "/" << total << " tests passed" << std::endl;
	return (passed == total) ? 0 : 1;
}
