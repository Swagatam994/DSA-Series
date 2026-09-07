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

function SumValuePairs(head, k) {
  if (!head) return console.error("No node found");
  let pair = [];
  let left = head;
  let current = head;
  while (current.next) current = current.next;

  let right = current;

  while (left.data<right.data) {
    let sum = left.data + right.data;

    if (sum === k) {
      pair.push([left.data, right.data]);
      left = left.next;
      right = right.back;
    } 
    else if (sum > k) right = right.back;

    else left = left.next;
  }

  return pair;
}

function main() {
  let arr = [1, 2, 5, 6, 7, 9];
  let head = convertDLL(arr);
  PrintDLL(head);

  const pair = SumValuePairs(head, 7);
  console.log(pair);
}

main();
