# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head
        fast: ListNode = head.next
        slow: ListNode = head
        count: int = 0

        while fast != None:
            fast = fast.next
            if count % 2 == 0:
                slow = slow.next
            count+=1

        return slow