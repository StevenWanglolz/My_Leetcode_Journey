class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        m = defaultdict(list)
        for s in strs:
            w = ''.join(sorted(s))
            m[w].append(s)
        return list(m.values())
