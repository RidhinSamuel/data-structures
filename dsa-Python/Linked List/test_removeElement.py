import pytest
from removeElement import LinkedList, removeElement

@pytest.fixture
def sample_linked_list():
    linked_list = LinkedList()
    linked_list.insertAtEnd(1)
    linked_list.insertAtEnd(2)
    linked_list.insertAtEnd(3)
    linked_list.insertAtEnd(4)
    return linked_list

def test_remove_from_empty_list():
    linked_list = LinkedList()
    index, new_head = removeElement(linked_list.head, 1)
    assert index == -1
    assert new_head is None

def test_remove_only_element():
    linked_list = LinkedList()
    linked_list.insertAtEnd(1)
    index, new_head = removeElement(linked_list.head, 1)
    assert index == 1
    assert new_head is None

def test_remove_first_element(sample_linked_list):
    index, new_head = removeElement(sample_linked_list.head, 1)
    assert index == 1
    assert new_head.data == 2

def test_remove_last_element(sample_linked_list):
    index, new_head = removeElement(sample_linked_list.head, 4)
    assert index == 1
    assert new_head.next.next.next is None

def test_remove_middle_element(sample_linked_list):
    index, new_head = removeElement(sample_linked_list.head, 2)
    assert index == 1
    assert new_head.next.data == 3

def test_remove_multiple_occurrences():
    linked_list = LinkedList()
    linked_list.insertAtEnd(1)
    linked_list.insertAtEnd(2)
    linked_list.insertAtEnd(2)
    linked_list.insertAtEnd(3)
    index, new_head = removeElement(linked_list.head, 2)
    assert index == 1
    assert new_head.next.data == 3
