class Node {
  constructor(data, next_node = null) {
    this.data = data;
    this.next = next_node;
  }
}

function getKthNode(head, k) {
  let Kth_Node;
  for (i = 0; i < k; i++) {
    Kth_Node = head.next;
  }
  return Kth_Node;
}

function Reverse(head) {
  let prev = head;
  let q = head.next;
  let front = head.next;
  while (front.next) {
    front = front.next;
    q.next = prev;
    prev = q;
    q = front;
  }
  head.next = null;
  front.next = prev;
  return prev;
}


function PrintDLL(head) {
  while (head) {
    process.stdout.write(head.data + " ");
    head = head.next;
  }
  console.log();
}

function main() {
  let arr = [1, 2, 2, 6, 7, 9];
  let head = convertDLL(arr);
  PrintDLL(head);
  const k = 3;
  let temp=head;

  while(temp){
  let Kth_Node = getKthNode(head, k);
  let next_node=Kth_Node.next;
  Kth_Node.next=null;
  Reverse(temp);

  if(temp===head)
    head=Kth_Node;

  prevNode=temp;
  temp=next_node;

  }
  PrintDLL(head);
}

main();
