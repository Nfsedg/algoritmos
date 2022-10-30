// function to extract empty string values of an object

const extractEmptyStringValues = (obj) => {
  const result = {};
  Object.keys(obj).forEach((key) => {
    if (obj[key] === '') {
      result[key] = obj[key];
    }
  });
  return result;
}