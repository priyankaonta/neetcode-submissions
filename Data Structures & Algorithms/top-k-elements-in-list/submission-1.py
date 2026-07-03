class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        frequency = {}
        for n in nums:
            frequency[n] = 1 + frequency.get(n, 0)

        heap = []

        for num in frequency.keys():
            heapq.heappush(heap, (frequency[num], num))

        while len(heap) > k:
            heapq.heappop(heap)
        
        myList = []
        for i in range(k):
            myList.append(heapq.heappop(heap)[1])

        return myList   