 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* dummyNode = new ListNode(-1); //Take one dummy node
        ListNode* p3 = dummyNode;
        
        
        while((p1!=NULL) and (p2!=NULL)){ //check for both the lists together to compare 
            if(p1->val < p2->val){
                p3->next = p1;
                p1 = p1->next;
            }
            else{
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;
        }
        
        while(p1!=NULL){  //and check separately both the lists, if one list is null, then append the other list to the dummyNode
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        
        while(p2!=NULL){
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
        
    return dummyNode->next;  
        
    }
