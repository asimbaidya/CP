from typing import List


class Solution:
    def maximumTop(self, nums: List[int], k: int) -> int:
        size = len(nums)
        max_til = [0]*size

        for i in range(size):
            max_til[i] = max(max_til[i-1],nums[i])

        if size == 1:
            k = k%2
        else:
            k = min(size+1,k)

        ans = 0
        if size == 1 and k == 1:
            ans = -1
        elif size == 1 and k == 0:
            ans = nums[0]
        elif k == 0:
            ans = nums[0]
        elif k == 1:
            ans= nums[1]
        elif k > size:
            ans = max_til[-1]
        elif k == size:
            ans = max_til[-2]
        else:
            ans = max(nums[k],max_til[k-2])
        print(ans)
        return ans



def main():
    s = Solution()
    s.maximumTop(nums = [1], k =1 )
    s.maximumTop(nums = [1], k =2 )
    s.maximumTop(nums = [1], k =3 )

    s.maximumTop(nums = [5,2,1,4,0,6], k =1 )
    s.maximumTop(nums = [5,2,1,4,0,6], k =2 )
    s.maximumTop(nums = [5,2,1,4,0,6], k =3 )
    s.maximumTop(nums = [5,2,1,4,0,6], k =4 )
    s.maximumTop(nums = [5,2,1,4,0,6], k =5)
    s.maximumTop(nums = [5,2,1,4,0,6], k =6 )
    s.maximumTop(nums = [5,2,1,4,0,6], k =7 )
    s.maximumTop(nums = [5,2,1,4,0,6], k =8 )
    s.maximumTop(nums = [5,2,1,4,0,6], k =2 )
    s.maximumTop(nums = [5,2,2,4,0,6], k = 4)
    s.maximumTop(nums = [2], k = 1)
    s.maximumTop(nums = [2,1,3], k = 3)
    s.maximumTop(nums=[35,43,23,86,23,45,84,2,18,83,79,28,54,81,12,94,14,0,0,29,94,12,13,1,48,85,22,95,24,5,73,10,96,97,72,41,52,1,91,3,20,22,41,98,70,20,52,48,91,84,16,30,27,35,69,33,67,18,4,53,86,78,26,83,13,96,29,15,34,80,16,49],k=15)
    s.maximumTop(nums=[91,98,17,79,15,55,47,86,4,5,17,79,68,60,60,31,72,85,25,77,8,78,40,96,76,69,95,2,42,87,48,72,45,25,40,60,21,91,32,79,2,87,80,97,82,94,69,43,18,19,21,36,44,81,99],k=2)
    pass


if __name__ == '__main__':
    main()
        
    
        