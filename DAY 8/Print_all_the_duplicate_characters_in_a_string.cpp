/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1 */

class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    unordered_set<char> seen;
    string result;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }

    return result;
	}
};