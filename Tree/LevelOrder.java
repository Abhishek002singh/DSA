import java.util.*;
class Node
{
    int data;
    Node left;
    Node right;

    public Node(int val)
    {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

public class LevelOrder
{

    public static ArrayList<ArrayList<Integer>> levelOrderTraversal(Node root)
    {
        if(root == null)
        {
            return new ArrayList<>();
        }

        ArrayList<ArrayList<Integer>> result = new ArrayList<>();

        Queue<Node> q = new LinkedList<>();
        q.add(root);

        while(!q.isEmpty())
        {
            int len = q.size();

            ArrayList<Integer> subres = new ArrayList<>();
            for(int i = 0;i<len;i++)
            {
                Node node = q.poll();
                subres.add(node.data);

                if(node.left!=null)
                {
                    q.add(node.left);
                }
                if(node.right!=null)
                {
                    q.add(node.right);
                }
            }

            result.add(subres);
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

        ArrayList<ArrayList<Integer>> ans = levelOrderTraversal(root);

        for(ArrayList<Integer> level : ans)
        {
            for(int val : level)
            {
                System.out.print(val+" ");
            }
            System.out.println();
        }

    }
}
