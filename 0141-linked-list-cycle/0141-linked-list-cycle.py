# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head == None or head.next == None:
            return False
        fast: ListNode = head.next
        slow: ListNode = head
        count: int = 0
        while fast != None:
            if fast == slow:
                return True
            if count % 2 == 0:
                slow = slow.next
            fast = fast.next
            count += 1
        return False
