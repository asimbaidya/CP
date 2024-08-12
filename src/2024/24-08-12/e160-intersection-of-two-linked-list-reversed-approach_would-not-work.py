from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


def revList(head:ListNode):
    # this will messed up the list because there exist common nodes 
    rev_head = None
    while head is not None:
        # iterate
        tmp = head
        head = head.next

        # reverse
        tmp.next = rev_head
        rev_head = tmp
    return rev_head
    
    

class Solution:
    def getIntersectionNode(
        self, headA: ListNode, headB: ListNode
    ) -> Optional[ListNode]:


        # reverse
        headA = revList(headA)
        headB = revList(headB)
        
        tmpA = headA
        tmpB = headB
        ans_node = None
        while tmpA and tmpB and tmpA is not tmpB:
            print(ans_node)
            ans_node = tmpA
            tmpA = tmpA.next
            tmpB = tmpB.next
        
        headA = revList(headA)
        headB = revList(headB)
        return ans_node





def main():
    s = Solution()
    pass


if __name__ == "__main__":
    main()
