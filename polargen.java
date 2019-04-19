import java.util.Random;

public class polargen
{
	private double tarolt;
	private boolean nincsTarolt;
	private Random r;
	private int RAND_MAX;
	
	public polargen()
	{
		nincsTarolt = true;
		r = new Random();
		r.setSeed(20);
		this.RAND_MAX=100;
	}
	public polargen(Integer RAND_MAX)
	{
		nincsTarolt = true;
		r = new Random();
		r.setSeed(20);
		this.RAND_MAX=RAND_MAX;
	}
	
	public double kovetkezo()
	{
		if (nincsTarolt)
	    {
			
			double u1, u2, v1, v2, w;
			int i=0;
	        do
		    {
			      u1 = r.nextInt() / (RAND_MAX + 1.0);
			      u2 = r.nextInt() / (RAND_MAX + 1.0);
			      v1 = 2 * u1 - 1;
			      v2 = 2 * u2 - 1;
			      w = v1 * v1 + v2 * v2;
		    }
		    while (w > 1 && i++ < 40000000);
	        double r = Math.sqrt ((2 * Math.log10(w)) / w);
	        tarolt = r * v2;
	        nincsTarolt = !nincsTarolt;
	        return r * v1;
	    }
	    else
	    {
	        nincsTarolt = !nincsTarolt;
	        return tarolt;
	    }
	}
}
