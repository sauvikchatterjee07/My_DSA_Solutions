ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  // create one dummy node to rturn the result
  ListNode* dummy = new ListNode();
  listNode* temp = dummy;
  int carry = 0
  
  //run the loop until either one of the nodes become null or the carry is not 0
  while(l1!= NULL or l2!= NULL or carry){
	  
  	//if l1 is not null add the value of it to the sum
  	int sum = 0;
	if(l1 != NULL){
		sum+= l1->val;
		l1 = l1->next;
	}
	  
  	//if l2 is not null add the value of it to the sum
	if(l2 != NULL){
		sum+= l2->val;
		l2 = l2->next;
	}
	  
  sum += carry;
  carry = sum/10;
	  
  //create a new node with the rightmost value of the sum and keep the carry for next iteration
  ListNode* n = new ListNode(sum%10);
	  
  //make temp->next point to this node
  temp->next = n;
	  
  //take temp to the next node
  temp = temp->next;
	  
  }
 return dummy->next; //return dummy node's next
  
}
