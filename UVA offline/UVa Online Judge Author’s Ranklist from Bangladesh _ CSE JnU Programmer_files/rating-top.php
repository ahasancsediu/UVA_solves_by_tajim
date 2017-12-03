
var top_rated_output = '<p><strong>Posts</strong> | <a href="javascript:" onclick="PDRTJS_TOP.get_top( \'pages\', \'0\' );">Pages</a> | <a href="javascript:" onclick="PDRTJS_TOP.get_top( \'comments\', \'0\' );">Comments</a></p><p><strong><small>All</small></strong> | <a href="javascript:" title="Posts created today" onclick="PDRTJS_TOP.get_top( \'posts\', \'1\' );"><small>Today</small></a> | <a href="javascript:" title="Posts created this week" onclick="PDRTJS_TOP.get_top( \'posts\', \'7\' );"><small>This Week</small></a> | <a href="javascript:" title="Posts created this month" onclick="PDRTJS_TOP.get_top( \'posts\', \'31\' );"><small>This Month</small></a></p> <ul id="top_posts"><li><a href="http://csejnuprogrammer.wordpress.com/2012/01/23/slideshow/">SlideShow</a><br/><strong> 5/5</strong> (6 votes)</li><li><a href="http://csejnuprogrammer.wordpress.com/2012/01/11/lets-learn-programming-sticky-post-updated-daily/">Let’s Learn Programming (Sticky Post-updated daily).</a><br/><strong> 5/5</strong> (2 votes)</li><li><a href="http://csejnu.wordpress.com/2012/01/12/নিউ-ইয়র্ক-মেয়র-এখন-কোডিং-ক/">নিউ ইয়র্ক মেয়র এখন কোডিং কোর্সের শিক্ষার্থী</a><br/><strong> 5/5</strong> (2 votes)</li><li><a href="http://4r2mcse.wordpress.com/2012/01/12/২০১২-হবে-কৃত্রিম-বুদ্ধিম/">২০১২ হবে কৃত্রিম বুদ্ধিমত্তায় আগ্রগতির বছর</a><br/><strong> 5/5</strong> (1 vote)</li><li><a href="http://4r2mcse.wordpress.com/2012/01/11/unofficial-buet-iupc-2011-ranklist/">[Unofficial] BUET IUPC 2011 Ranklist</a><br/><strong> 5/5</strong> (1 vote)</li></ul>';
var items = document.getElementsByClassName('pd_top_rated_holder_posts'), i, len;
if ( items.length > 0 ) {
	// loop through all elements 
	for (i = 0, len = items.length; i < len; i++) {
    	items[i].innerHTML = top_rated_output;
	}
} else {
	document.getElementById('pd_top_rated_holder').innerHTML = top_rated_output;
}