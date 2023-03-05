from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# [3] https://leetcode.com/problems/add-two-numbers/
# solution

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        # for storing sum of two list
        # **could have uused  single variable tho**
        l1_sum: int = 0
        l2_sum: int = 0

        # finding sum for first list
        i = 0
        tmp1 = l1
        while tmp1:
            l1_sum += tmp1.val * 10**i
            tmp1 = tmp1.next
            i+=1
        j = 0

        # finding sum for second list
        tmp2 = l2
        while tmp2:
            l2_sum += tmp2.val * 10**j
            tmp2 = tmp2.next
            j+=1

        # we have found the sum of linked list in 2 var
        # lets add them
        sum = l1_sum + l2_sum

        # now lets puts this  values in a new linked list
        # sum%10 = to get last  digit.
        # sum = sum/10 to get new order.
        # ouch, this is reverse order stuff.
        # worked, but lets hack it with str
        
        new_head = ListNode(sum%10)
        sum //= 10
        tmp = new_head
        while sum:
            curr = ListNode(sum%10)
            sum //= 10
            tmp.next = curr
            tmp = curr
        return new_head
