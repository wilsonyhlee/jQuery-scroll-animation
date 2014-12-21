       
(function($) {
    $.fn.scrollAnimation = function(options) {
 	
 	//options: ( objectToMove, positionToMoveTo, moveSpeed )

    	this.click(function(){
    		var param = $.extend({
            // These are the defaults.
            	objectToMove: $('html, body'), 
            	positionToMoveTo: 100, 
            	moveSpeed: 1000
        	}, options );


    		param.objectToMove.animate({
                scrollTop: param.positionToMoveTo
            }, param.moveSpeed);
    	})
	};
}(jQuery));
