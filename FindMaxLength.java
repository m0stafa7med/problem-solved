import java.util.HashMap;
import java.util.Map;

public class FindMaxLength {
	public static int findMax(int [] num)
	{
		
		Map<Integer,Integer>map= new HashMap<>();
		map.put(0, -1);
		int counter=0,maxLength=0;
		
		for(int i=0;i<num.length;i++)
		{
			if(num[i]==0)
				counter-=1;
			else
				counter+=1;
			if(map.containsKey(counter))
			{
				maxLength=Math.max(maxLength, i-map.get(counter));
			}
			else
			{
				map.put(counter, i);
			}
				
		}
		
		return maxLength;
		
	}

	
	public static void main(String[] args) {
		int []num= {0,1,0,0,1,1,0};
		System.out.println(findMax(num));

	}

}
