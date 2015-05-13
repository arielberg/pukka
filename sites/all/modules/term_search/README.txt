README.txt for the Term Search module for Drupal.

To use, first install and enable the module.
Navigate to the admin/config/search/settings page, 
and check the 'Term Search' box under Active Search Modules.
After saving, you can also choose which vocabularies 
are indexed for search in the "Indexed Vocabularies" fieldset.

The module also allows other modules to interact with the 
indexing and searching process, by invoking either 
hook_term_update_index() or hook_term_search_result().
