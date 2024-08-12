from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def getIntersectionNode(
        self, headA: ListNode, headB: ListNode
    ) -> Optional[ListNode]:

        list_two_len = 0
        list_one_len = 0
        curr_one = headA

        # measure lists len
        while curr_one:
            list_one_len += 1
            curr_one = curr_one.next

        curr_two = headB
        while curr_two:
            list_two_len += 1
            curr_two = curr_two.next

        # let's align first!
        diff = abs(list_one_len - list_two_len)
        if list_one_len > list_two_len:
            while diff != 0:
                diff -= 1
                headA = headA.next
        else:
            while diff != 0:
                diff -= 1
                headB = headB.next

        ref = None
        head_ref = headA
        while headA and headB:
            if headB != headA:
                ref = headA

            headA = headA.next
            headB = headB.next
        if ref is None:
            return head_ref
        else:
            return ref.next if ref is not None else ref


def main():
    s = Solution()
    pass


if __name__ == "__main__":
    main()
