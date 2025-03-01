class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        ListNode *dummyNode = new ListNode();
        dummyNode->next = head;

        ListNode *current = dummyNode;

        while (current->next)
        {

            if (current->next->val == val)
            {

                current->next = current->next->next;
            }
            else
            {

                current = current->next;
            }
        }

        return dummyNode->next;
    }
};