/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func getIntersectionNode(headA, headB *ListNode) *ListNode {
    testA := headA
    var testB *ListNode
    for testA != nil {
        
        testB = headB
        for testB != nil {
            if testA.Val == testB.Val {
                if testA == testB {
                    return testB
                }
            }
            testB = testB.Next
        }
        testA = testA.Next
    }
    return nil
}