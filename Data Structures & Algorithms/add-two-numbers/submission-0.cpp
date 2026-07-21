class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string str1 = "", str2 = "";

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while (temp1) {
            str1 += to_string(temp1->val);
            temp1 = temp1->next;
        }

        while (temp2) {
            str2 += to_string(temp2->val);
            temp2 = temp2->next;
        }

        // ❌ DO NOT reverse input

        string result = "";
        int i = 0, j = 0, carry = 0;

        while (i < str1.size() || j < str2.size() || carry) {
            int sum = carry;

            if (i < str1.size()) sum += str1[i++] - '0';
            if (j < str2.size()) sum += str2[j++] - '0';

            result += to_string(sum % 10);
            carry = sum / 10;
        }

        // result is already in correct reverse order

        ListNode* head = new ListNode(result[0] - '0');
        ListNode* temp = head;

        for (int i = 1; i < result.size(); i++) {
            temp->next = new ListNode(result[i] - '0');
            temp = temp->next;
        }

        return head;
    }
};