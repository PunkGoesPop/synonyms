#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main() {

	map<string, set<string>> mp;

	int q = 0;
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		string operation;
		cin >> operation;

		if (operation == "ADD")
		{
			string word1, word2;
			cin >> word1 >> word2;

			if (word1 != word2)
			{
				mp[word1].insert(word2);
				mp[word2].insert(word1);
			}
		}

		if (operation == "COUNT")
		{
			string word;
			cin >> word;

			cout << mp[word].size() << endl;
		}

		if (operation == "CHECK")
		{
			string word1, word2;
			cin >> word1 >> word2;

			if (word1 != word2)
			{
				if (mp[word1].count(word2) == 1 || mp[word2].count(word1) == 1)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
		}
	}

}