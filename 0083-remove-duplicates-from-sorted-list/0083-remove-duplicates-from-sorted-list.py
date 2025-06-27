# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head
        prev: ListNode = None
        temp: ListNode = head
        while temp != None:
            if prev == None:
                prev = temp
            elif prev.val == temp.val:
                # bad stuff
                prev.next = temp.next
                #prev = prev.next
                #temp = temp.next
            else:
                prev = temp
            temp = temp.next
        return head
