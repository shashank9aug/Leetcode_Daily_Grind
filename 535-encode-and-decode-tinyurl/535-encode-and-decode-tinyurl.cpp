class Solution {
public:
    map<string,string>mpp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string key = "http://LC/" + to_string(mpp.size()) ;
        mpp[key] = longUrl;
        return key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mpp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));