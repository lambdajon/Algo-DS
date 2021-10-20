class MyLinkedList
{
  struct ListNode
  {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  ListNode *head = nullptr;
  int l = 0;

public:
  MyLinkedList()
  {
  }

  int get(int index)
  {
    if (head == nullptr || index >= l)
      return -1;

    ListNode *temp = head, *prev = nullptr;
    while (temp != nullptr && index--)
    {
      prev = temp;
      temp = temp->next;
    }
    return temp == nullptr ? prev->val : temp->val;
  }

  void addAtHead(int val)
  {
    ListNode *newnode = new ListNode(val);
    newnode->next = head;
    head = newnode;
    l++;
  }

  void addAtTail(int val)
  {
    l++;
    ListNode *newnode = new ListNode(val);
    if (head == nullptr)
    {
      head = newnode;
      return;
    }
    ListNode *temp = head;
    while (temp->next != nullptr)
      temp = temp->next;
    temp->next = newnode;
  }

  void addAtIndex(int index, int val)
  {
    if (index > l || (index > 0 && head == nullptr))
      return;
    l++;
    ListNode *newnode = new ListNode(val);
    if (index == 0)
    {
      newnode->next = head;
      head = newnode;
      return;
    }
    ListNode *temp = head, *prev = nullptr;
    while (temp != nullptr && index--)
    {
      prev = temp;
      temp = temp->next;
    }
    prev->next = newnode;
    newnode->next = temp;
  }

  void deleteAtIndex(int index)
  {
    if (index >= l || head == nullptr)
      return;
    l--;
    if (index == 0)
    {
      head = head->next;
      return;
    }
    ListNode *temp = head, *prev = nullptr;
    while (temp != nullptr && index--)
    {
      prev = temp;
      temp = temp->next;
    }
    temp == nullptr ? prev->next = nullptr : prev->next = temp->next;
  }
};