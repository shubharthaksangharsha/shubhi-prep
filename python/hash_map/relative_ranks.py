from typing import List
def findRelativeRanks(score: List[int]) -> List[str]:
    newscore= sorted(score, reverse=True)
    medals = {}
    for i, j in enumerate(newscore):
        if i == 0:
            medals[j] = "Gold Medal"
        elif i == 1:
            medals[j] = "Silver Medal"
        elif i == 2:
            medals[j] = "Bronze Medal"
        else:
            medals[j] = str(i+1)
        
    return [medals[i] for i in score]


#score = []
#[score.append(int(input())) for x in range(int(input()))]
score = [10,3,8,9,4]
print(findRelativeRanks(score))
