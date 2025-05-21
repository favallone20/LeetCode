#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    // Costruttore di default: inizializza val a 0 e next a nullptr
    ListNode() : val(0), next(nullptr) {}

    // Costruttore con valore: inizializza val con x e next a nullptr
    ListNode(int x) : val(x), next(nullptr) {}

    // Costruttore completo: inizializza val con x e next con il puntatore fornito
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution
{

public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode dummy(0);
        ListNode *current = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int sum = carry;

            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return dummy.next;
    }
};


// Example usage
int main() {
    Solution solution;
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* result = solution.addTwoNumbers(l1, l2);
    while (result) {
        std::cout << result->val << " ";
        result = result->next;
    }
    return 0;
}
// Output: 7 0 8
// Explanation: 342 + 465 = 807