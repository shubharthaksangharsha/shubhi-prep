from typing import List
import collections
def groupAnagrams(strs: List[str]) -> List[List[str]]:
    #using sorting method
    #TC: O(NKlogK), SC: O(NK)
#    ans = collections.defaultdict(list)
#    for word in strs:
#        ans["".join((sorted(word)))].append(word)
#    return ans.values()
   #using count method
   #TC : O(NK) , SC: O(NK)
    ans = collections.defaultdict(list)
    for word in strs:
        count = [0] * 26
        for x in word:
            count[ord(x) - ord('a')] += 1
        ans[tuple(count)].append(word)
    return ans.values()

strs = ["eat","tea","tan","ate","nat","bat"]
print(groupAnagrams(strs))

