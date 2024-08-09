from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        # let's use list first
        p1 = None
        p2 = None

        p1_curr = None
        p2_curr = None

        curr = head
        while curr:
            # this part is too ambiguous
            if curr.val < x:
                if p1 is None:
                    p1 = curr
                    p1_curr = p1
                else:
                    p1_curr.next = curr
                    p1_curr = curr
            else:
                if p2 is None:
                    p2 = curr
                    p2_curr = p2
                else:
                    p2_curr.next = curr
                    p2_curr = curr
            # okey?
            prev = curr
            curr = curr.next
            prev.next = None

        # okey? nah, one can be None
        if p1 is None:
            p1 = p2
        else:
            p1_curr.next = p2

        # tmp = p1
        # while tmp:
        #     print("bla", tmp.val)
        #     tmp = tmp.next

        return p1


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
