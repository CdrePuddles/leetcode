# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:       
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        temp: List[ListNode] = list()
        ret: ListNode = None
        head: ListNode = None
        for arr in lists:
            while arr != None:
                temp.append(arr)
                arr = arr.next
        temp = sorted(temp, key=lambda node: node.val)
        for node in temp:
            if (ret == None):
                ret = node
                head = ret
            else:
                ret.next = node
                ret = ret.next
        return head

