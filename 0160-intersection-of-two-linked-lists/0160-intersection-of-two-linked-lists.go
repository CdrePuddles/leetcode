/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func getIntersectionNode(headA, headB *ListNode) *ListNode {
    testA, testB := headA, headB
    
    for testA != testB {
        
        if testA != nil {
            testA = testA.Next
        } else {
            testA = headB
        }

        if testB != nil {
            testB = testB.Next
        } else {
            testB = headA
        }
    }
    return testA
}