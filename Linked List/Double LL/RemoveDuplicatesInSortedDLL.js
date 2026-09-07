class Node {
  constructor(data, next_node = null, back_node = null) {
    this.data = data;
    this.next = next_node;
    this.back = back_node;
  }
}

function convertDLL(arr) {
  let head = new Node(arr[0]);
  let prev = head;

  for (i = 1; i < arr.length; i++) {
    let temp = new Node(arr[i], null, prev);
    prev.next = temp;
    prev = temp;
  }
  return head;
}

function PrintDLL(head) {
  while (head) {
    process.stdout.write(head.data + " ");
    head = head.next;
  }
  console.log();
}

function Duplicates(head) {
  if (!head) return console.error("No node found");
  let temp = head,
    next_node = head.next;

  while (temp.next && next_node.next) {

    if (temp.data === next_node.data) {
      temp.next = next_node.next;
      next_node.next.back = temp;
      next_node=temp.next;
     
    } 
    
    else {
      temp = temp.next;
      next_node = next_node.next;
    }
  }
  return head;
}

function main() {
  let arr = [1, 2, 2, 6, 7, 9];
  let head = convertDLL(arr);
  PrintDLL(head);

  head = Duplicates(head);
  PrintDLL(head);
}

main();
