from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        # let's use list first
        p1 = []
        p2 = []

        curr = head
        while curr:
            if curr.val < x:
                p1.append(curr)
            else:
                p2.append(curr)
            curr = curr.next

        head = None
        curr = None
        for node in p1 + p2:
            if head is None:
                head = node
                curr = head
            else:
                curr.next = node
                curr = node
                node.next = None

        # tmp = head
        # while tmp:
        #     print("bla", tmp.val)
        #     tmp = tmp.next
        return head


def main():
    s = Solution()

    nums = [1, 4, 3, 2, 5, 2]
    head = None
    curr = None
    for num in nums:
        tmp = ListNode(num)
        if head is None:
            head = tmp
            curr = tmp
        else:
            curr.next = tmp
            curr = tmp

    tmp = head
    while tmp:
        print(tmp.val)
        tmp = tmp.next

    s.partition(head, x=3)
    pass


if __name__ == "__main__":
    main()
