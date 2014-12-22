(function($) {
    $.fn.scrollAnimation = function(options) {
    //options: ( positionToMoveTo, moveSpeed )
        this.click(function(){
            var param = $.extend({
            // These are the defaults. 
                positionToMoveTo: 100, 
                moveSpeed: 1000
            }, options );


            $('html, body').animate({
                scrollTop: param.positionToMoveTo
            }, param.moveSpeed);
        })
    };
}(jQuery)); 
