# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# TWO POINTERS 
# DUMMY NODE
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # if head == None:
        #     return 
        # if (head.next == None) and (n == 1):
        #     return head.next
        
        dummy = ListNode(0, head)
        left = dummy
        node = head 
        while n > 0 and node:
            node = node.next 
            n -= 1
        while node:
            left = left.next
            node = node.next
        left.next = left.next.next
        return dummy.next

        
        
    
        


       
        return head
            
            

            

        

        