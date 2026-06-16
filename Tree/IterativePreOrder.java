import java.util.*;


class Node
{
    int val;
    Node left;
    Node right;

    public Node(int val)
    {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

public class IterativePreOrder
{

    public static List<Integer> preOrderTraversal(Node root)
    {
        List<Integer> result = new ArrayList<>();
        if(root == null)
        {
            return result;
        }

        Stack<Node> st = new Stack<Node>();

        st.push(root);

        while(!st.isEmpty())
        {
            Node node = st.pop();
            result.add(node.val);

            if(node.right!=null)
            {
                st.push(node.right);
            }
            if(node.left!=null)
            {
                st.push(node.left);
            }

        }
        return result;
    }

    public static void main(String args[])
    {
        Node root = new Node(5);
        root.left = new Node(12);
        root.right = new Node(13);

        root.left.left = new Node(7);
        root.left.right = new Node(14);

        root.right.right = new Node(2);

        root.left.left.left = new Node(17);
        root.left.left.right = new Node(23);

        root.left.right.left = new Node(27);
        root.left.right.right = new Node(3);

        root.right.right.left = new Node(8);
        root.right.right.right = new Node(11);

        List<Integer> preOrder = preOrderTraversal(root);
        for(int a: preOrder)
        {
            System.out.print(a+" ");
        }

    }
}

