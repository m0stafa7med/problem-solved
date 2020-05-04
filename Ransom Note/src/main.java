import java.util.concurrent.CancellationException;

public class main {
public static boolean canConstruct (String ransomName , String magazine)
{
	int [] countArr = new int [26];
	for(char c : magazine.toCharArray())
		countArr[c-'a']++;
	for(char c : ransomName.toCharArray())
		if(countArr[c-'a']>0)
			countArr[c-'a']--;
		else
			return false;
	return true;

	
}
	public static void main(String[] args) {
		System.out.println(canConstruct("aaz","aabbz"));
		

	}

}
