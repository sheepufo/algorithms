from nose.tools import *
from lib.sort_utils import *


def test_insertion_sort():
    """ test insertion_sort """
    array_unsort = [1, 5, 4, 3, 2]
    array_sort = [1, 2, 3, 4, 5]
    assert_equal(array_sort, insertion_sort(array_unsort))
    array_unsort = [10230, 5382, 4201, 3, 2234]
    array_sort = [3, 2234, 4201, 5382, 10230]
    assert_equal(array_sort, insertion_sort(array_unsort))
    
