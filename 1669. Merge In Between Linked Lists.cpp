    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *f=list1,*s=list1;
        
        for(int i=0;i<b;i++){ 
            
            if(i<a-1) f=f->next;
            s=s->next;
        }
        
        f->next=list2;
        while(list2->next!=NULL)
            list2=list2->next;
        
        list2->next=s->next;
        return list1;
    }
