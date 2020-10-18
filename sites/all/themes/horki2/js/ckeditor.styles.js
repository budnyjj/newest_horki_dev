/*
 *  Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 * For licensing, see LICENSE.html or http://ckeditor.com/license
 */

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if (typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet( 
	'drupal', 
	[
	    {
		name: 'Тэкст', 
		element : 'p',
		attributes: {}
	    },
	    {
		name: 'Падраздзел', 
		element : 'h2',
		attributes: {'class' : 'text-chapter'}
	    },
 	    {
		name: 'Урэзка', 
		element : 'p', 
		attributes: {'class' : 'text-accent'} 
	    },
	    {
		name: 'Подпіс',
		element : 'h3', 
		attributes: {'class' : 'text-signature'}
	    },
	    {
                name: 'Шэры блок',
		element: 'div',
		attributes: {'class' : 'text-box-gray'}
            },
	]
    );
}
