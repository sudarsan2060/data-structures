LLNode* solve(LLNode* node) {
    LLNode *slow = node, *fast = node;
    stack<int> s;

    while (fast && fast->next) {
        s.push(slow->val);
        slow = slow->next;
        fast = (fast->next)->next;
    }

    node = slow;
    if (fast) 
      slow = slow->next;

    while (slow && !s.empty()) {
        int x = s.top();
        s.pop();
        slow->val += x;
        slow = slow->next;
    }
    return node;
}

/***************************************************************************/

