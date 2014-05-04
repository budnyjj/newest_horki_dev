jQuery(document).ready(function($) {
    if($('.form-type-select select').length){
        $('.form-type-select select').change(function() {
            $(this).parents('form').submit();
        });
    }
});
