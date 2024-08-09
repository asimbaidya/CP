from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # is there any optimal approach really or just using two loop is the optimal?
        # first calculate len
        # then remove appropriage element
        # let's do brute force
        # exception 1 - what if need to remove head
        # exception 2 - what if need to remove only element(head)

        # get total len of List
        list_len = 0
        curr = head
        while curr:
            list_len += 1
            curr = curr.next

        # exception 2
        if list_len == 1:
            return None

        # exception 1
        if list_len - n == 0:
            return head.next

        node_to_remove_from_start = list_len - n
        curr = head
        while node_to_remove_from_start > 1:
            node_to_remove_from_start -= 1
            curr = curr.next

        # need to handle 1 exception of [n1],n=1
        curr.next = curr.next.next

        return head


def main():
    s = Solution()
    nums = [1, 2]
    head = None
    curr = None
    for n in nums:
        if head is None:
            head = ListNode(n)
            curr = head
        else:
            curr.next = ListNode(n)
            curr = curr.next

    head = s.removeNthFromEnd(head=head, n=2)
    while head:
        print(head.val)
        head = head.next


if __name__ == "__main__":
    main()
