class Solution {
public:
const long long prime = 31;  // A prime number to avoid hash collisions
const long long mod = 1e9 + 9;  // A large prime for modulo operation

long long hashFunction(string str, int len) {
    long long hashValue = 0;
    for (int i = 0; i < len; ++i) {
        hashValue = (hashValue * prime + (int)str[i]) % mod;
    }
    return hashValue;
}
long long powInt(long long base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result = (result * base) % mod;
    }
    return result;
}

long long updateHash(long long oldHash, char oldChar, char newChar, int patternLen) {
    long long updatedHash = (oldHash - (int)oldChar * powInt(prime, patternLen - 1)) % mod;
    updatedHash = (updatedHash * prime + (int)newChar) % mod;
    return (updatedHash + mod) % mod;  // Ensure the result is non-negative
}
int strStr(string haystack, string needle) {
    int haystackLen = haystack.length();
    int needleLen = needle.length();

    if (needleLen == 0) {
        return 0;  // Empty needle is always found at index 0
    }

    if (haystackLen < needleLen) {
        return -1;  // Needle is longer than haystack, not possible to find
    }

    long long needleHash = hashFunction(needle, needleLen);
    long long haystackHash = hashFunction(haystack.substr(0, needleLen), needleLen);

    for (int i = 0; i <= haystackLen - needleLen; ++i) {
        if (haystackHash == needleHash) {
            // If hash values match, do a character-by-character comparison
            bool match = true;
            for (int j = 0; j < needleLen; ++j) {
                if (haystack[i + j] != needle[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                return i;  // Needle found at index i
            }
        }

        if (i < haystackLen - needleLen) {
            // Update hash for the next substring
            haystackHash = updateHash(haystackHash, haystack[i], haystack[i + needleLen], needleLen);
        }
    }

    return -1;  // Needle not found in haystack
}
};