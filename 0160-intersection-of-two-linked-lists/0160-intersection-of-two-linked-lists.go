/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func getIntersectionNode(headA, headB *ListNode) *ListNode {
    testA := headA

    for testA != nil {
        
        testB := headB
        for testB != nil {
            if testA == testB {
                return testB
            }
            testB = testB.Next
        }
        testA = testA.Next
    }
    return nil
}