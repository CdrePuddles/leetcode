# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if head == None or head.next == None:
            return None
        prev: ListNode = None
        cur: ListNode = head
        ret = ListNode(0, head)

        for i in range(n):
            cur = cur.next
        prev = ret
        while cur != None:
            cur = cur.next
            prev = prev.next
        prev.next = prev.next.next

        return ret.next