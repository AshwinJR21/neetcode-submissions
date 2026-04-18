class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): 
            return False
        
        d = {}

        for i in range(len(s)):
            if s[i] not in d:
                d[s[i]] = 0
            if t[i] not in d:
                d[t[i]] = 0
            d[s[i]] += 1
            d[t[i]] -= 1
            # d[s[i]] = d.get(s[i], 0) + 1
            # d[t[i]] = d.get(t[i], 0) - 1
            
        for val in d.values():
            if val != 0:
                return False

        return True

        