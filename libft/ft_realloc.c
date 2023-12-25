void *ft_realloc(void *ptr, size_t new_size, size_t old_size)
{
  void *new_ptr;
  if(ptr == NULL)
      return (ft_calloc(new_size, 1));
  if (new_size == 0)
  {
      ptr = ft_free(ptr);
      return (NULL);
  }
  new_ptr = ft_calloc(new_size, 1);
  if (new_ptr == NULL)
        return (NULL);
  ft_memcpy(new_ptr, ptr, old_size);
  ptr = ft_free(ptr);
  return (new_ptr);
}
