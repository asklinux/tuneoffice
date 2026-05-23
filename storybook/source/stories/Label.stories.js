export default {
  title: 'Components/Label',
  tags: ['autodocs'],
  parameters: {
    docs: {
      description: {
        component: 'Various styled labels from TUNEOFFICE plugin UI.'
      }
    }
  }
};

export const Header = () => `
  <label class="header">Header label</label>
`;

Header.storyName = 'Header Label';

export const Link = () => `
  <label class="link">Link label</label>
`;

Link.storyName = 'Link Label';
